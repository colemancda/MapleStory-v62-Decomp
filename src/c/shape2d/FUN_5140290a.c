/* FUN_5140290a - 0x5140290a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140290a(void)

{
  if ((DAT_51411b66 & 1) == 0) {
    DAT_51411b66 = DAT_51411b66 | 1;
    type_info::raw_name((type_info *)&CWzVector2D::RTTI_Type_Descriptor);
    FUN_51402cd7(&DAT_51411b78);
  }
  return;
}


