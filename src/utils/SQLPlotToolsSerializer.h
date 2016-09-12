/***************************************************************************
 *  Copyright (C) 2014 Sebastian Schlag <sebastian.schlag@kit.edu>
 **************************************************************************/

#pragma once

#include <array>
#include <chrono>
#include <fstream>
#include <string>

#include "definitions.h"
#include "partition/Configuration.h"
#include "partition/Partitioner.h"
#include "partition/coarsening/ICoarsener.h"
#include "partition/refinement/IRefiner.h"

using defs::Hypergraph;
using partition::Configuration;
using partition::InitialPartitioner;
using partition::IRefiner;
using partition::ICoarsener;
using partition::Partitioner;

namespace utils {
class SQLPlotToolsSerializer {
 public:
  static void serialize(const Configuration& config, const Hypergraph& hypergraph,
                        const Partitioner& partitioner,
                        const std::chrono::duration<double>& elapsed_seconds,
                        const std::string& filename);
};
}  // namespace utils