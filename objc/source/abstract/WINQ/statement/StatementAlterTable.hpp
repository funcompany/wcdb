/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _WCDB_STATEMENTALTERTABLE_HPP
#define _WCDB_STATEMENTALTERTABLE_HPP

#include <WCDB/Statement.hpp>

namespace WCDB {

class StatementAlterTable final : public TypedSyntax<Syntax::AlterTableSTMT, Statement> {
public:
    StatementAlterTable& alterTable(const String& table);
    StatementAlterTable& schema(const Schema& schema);

    StatementAlterTable& renameToTable(const String& newTable);
    StatementAlterTable& renameColumn(const Column& oldColumn);
    StatementAlterTable& toColumn(const Column& newColumn);
    StatementAlterTable& addColumn(const ColumnDef& columnDef);
};

} // namespace WCDB

#endif /* _WCDB_STATEMENTALTERTABLE_HPP */
