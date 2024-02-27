/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(opus_rtp_sink.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8c65c508faef0791bad0d057ecf7a165)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <PSCR_LMR2LTE/opus_rtp_sink.h>
// pydoc.h is automatically generated in the build directory
#include <opus_rtp_sink_pydoc.h>

void bind_opus_rtp_sink(py::module& m)
{

    using opus_rtp_sink    = ::gr::PSCR_LMR2LTE::opus_rtp_sink;


    py::class_<opus_rtp_sink, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<opus_rtp_sink>>(m, "opus_rtp_sink", D(opus_rtp_sink))

        .def(py::init(&opus_rtp_sink::make),
           py::arg("host"),
           py::arg("rport"),
           py::arg("lport"),
           py::arg("samprate"),
           D(opus_rtp_sink,make)
        )
        




        
        .def("set_chan",&opus_rtp_sink::set_chan,       
            py::arg("rx_freq_offset"),
            py::arg("SIP_user"),
            py::arg("SIP_pw"),
            py::arg("uri"),
            D(opus_rtp_sink,set_chan)
        )

        ;




}








