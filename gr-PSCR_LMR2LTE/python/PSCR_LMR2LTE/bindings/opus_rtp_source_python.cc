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
/* BINDTOOL_HEADER_FILE(opus_rtp_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(41cfaa4ff833c384e3c2bfad499ac721)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/PSCR_LMR2LTE/opus_rtp_source.h>
// pydoc.h is automatically generated in the build directory
#include <opus_rtp_source_pydoc.h>

void bind_opus_rtp_source(py::module& m)
{

    using opus_rtp_source    = ::gr::PSCR_LMR2LTE::opus_rtp_source;


    py::class_<opus_rtp_source, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<opus_rtp_source>>(m, "opus_rtp_source", D(opus_rtp_source))

        .def(py::init(&opus_rtp_source::make),
           py::arg("port"),
           py::arg("samprate"),
           py::arg("ipv6"),
           D(opus_rtp_source,make)
        )
        




        
        .def("set_chan",&opus_rtp_source::set_chan,       
            py::arg("tx_freq_offset"),
            py::arg("SIP_user"),
            py::arg("SIP_pw"),
            py::arg("uri"),
            D(opus_rtp_source,set_chan)
        )

        ;




}








