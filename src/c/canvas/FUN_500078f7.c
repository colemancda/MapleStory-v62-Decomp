/* FUN_500078f7 - 0x500078f7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_500078f7(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(byte)(&DAT_50071ad0)
                      [(param_2 >> 5 & 0x7c00000 | param_1 & 0xf800ffff) >> 0x10 |
                       param_3 >> 2 & 0x3fU];
  uVar2 = uVar1 & 0xf;
  return (((uint)(byte)(&DAT_50061ad0)[(param_2 >> 6 & 0x3f000 | param_1 & 0xfc0000) >> 8 | uVar2] |
          ((uVar1 & 0xfffffff0) << 4 | uVar1 & 0xf0) << 4) << 8 |
         (uint)(byte)(&DAT_50061ad0)[param_1 & 0xfc00 | param_2 >> 6 & 0x3f0 | uVar2]) << 8 |
         (uint)(byte)(&DAT_50061ad0)[((param_1 & 0xfc) << 6 | param_2 & 0xfc) << 2 | uVar2];
}


