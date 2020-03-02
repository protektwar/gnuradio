/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt_symbol_inner_interleaver.h>

void bind_dvbt_symbol_inner_interleaver(py::module& m)
{
    using dvbt_symbol_inner_interleaver    = gr::dtv::dvbt_symbol_inner_interleaver;


    py::class_<dvbt_symbol_inner_interleaver,gr::block,
        std::shared_ptr<dvbt_symbol_inner_interleaver>>(m, "dvbt_symbol_inner_interleaver")

        .def(py::init(&dvbt_symbol_inner_interleaver::make),
           py::arg("ninput"), 
           py::arg("transmission"), 
           py::arg("direction") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<dvbt_symbol_inner_interleaver> p){
            return p->to_basic_block();
        })
        ;


} 