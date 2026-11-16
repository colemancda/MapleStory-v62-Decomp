/* FUN_50007b8d - 0x50007b8d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50007b8d(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(byte)(&DAT_50071ad0)
                      [((param_1 >> 7 & 0x1f00000 | param_2 & 0x8000) >> 4 | param_2 & 0xf000) >> 5
                       | param_3 >> 2 & 0x3fU];
  uVar2 = uVar1 & 0xf;
  return (((uint)(byte)(&DAT_50061ad0)
                       [((param_1 >> 2 & 0x3f0000 | param_2 & 0xc00) >> 4 | param_2 & 0xf00) >> 2 |
                        uVar2] | ((uVar1 & 0xfffffff0) << 4 | uVar1 & 0xf0) << 4) << 8 |
         (uint)(byte)(&DAT_50061ad0)
                     [param_2 >> 2 & 0x30 | (param_2 & 0xf0) << 2 | param_1 & 0xfc00 | uVar2]) << 8
         | (uint)(byte)(&DAT_50061ad0)
                       [(((param_1 & 0xfc) << 2 | param_2 & 0xf) << 4 | param_2 & 0xc) << 2 | uVar2]
  ;
}


