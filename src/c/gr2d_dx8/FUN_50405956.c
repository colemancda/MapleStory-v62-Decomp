/* FUN_50405956 - 0x50405956 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50405956(void)

{
  if ((DAT_50439088 & 1) == 0) {
    DAT_50439088 = DAT_50439088 | 1;
    type_info::raw_name((type_info *)&CWzGr2DLayer::RTTI_Type_Descriptor);
    FUN_504063cd(&DAT_5043908c);
  }
  return;
}


