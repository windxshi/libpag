/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making libpag available.
//
//  Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "pag/file.h"
#include "pag/pag.h"
#include "rendering/caches/TextContent.h"
#include "rendering/caches/TextGlyphs.h"
#include "rendering/graphics/Recorder.h"

namespace pag {
std::unique_ptr<TextContent> RenderTexts(const std::shared_ptr<TextGlyphs>& textGlyphs,
                                         TextPathOptions* pathOption, TextMoreOptions* moreOption,
                                         std::vector<TextAnimator*>* animators, Frame layerFrame);

void CalculateTextAscentAndDescent(const TextDocument* textDocument, float* pMinAscent,
                                   float* pMaxDescent);
}  // namespace pag
