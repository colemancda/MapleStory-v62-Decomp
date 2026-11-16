/* FUN_50008abb - 0x50008abb in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50008abb(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(byte)(&DAT_50071ad0)
                      [(int)(param_3 & 0xfc | 0x1f00) >> 2 | param_1 >> 0x10 & 0xf800];
  uVar2 = uVar1 & 0xf;
  return (((uint)(byte)(&DAT_50061ad0)
                       [((param_2 >> 3 & 0x1000 | param_1 & 0xfc0000) >> 2 | param_2 & 0xf800) >> 6
                        | uVar2] | ((uVar1 & 0xfffffff0) << 4 | uVar1 & 0xf0) << 4) << 8 |
         (uint)(byte)(&DAT_50061ad0)[param_2 >> 1 & 0x3f0 | param_1 & 0xfc00 | uVar2]) << 8 |
         (uint)(byte)(&DAT_50061ad0)
                     [((param_1 & 0xfc) << 3 | param_2 & 0x1f) << 5 | param_2 & 0x10 | uVar2];
}


