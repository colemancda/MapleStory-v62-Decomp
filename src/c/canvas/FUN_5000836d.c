/* FUN_5000836d - 0x5000836d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_5000836d(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (byte)(&DAT_50071ad0)
                [((param_2 & 0xf000 | param_2 >> 4 & 0x800) >> 1 | param_1 & 0x8000) >> 4 |
                 param_3 >> 2 & 0x3fU | param_1 & 0xf000] & 0xf;
  return ((byte)(&DAT_50061ad0)
                [(param_2 >> 4 & 0xc0 | param_2 & 0xf00) >> 2 | (param_1 & 0xf00) << 4 |
                 param_1 & 0xc00 | uVar1] & 0xf0 |
         ((byte)(&DAT_50071ad0)
                [((param_2 & 0xf000 | param_2 >> 4 & 0x800) >> 1 | param_1 & 0x8000) >> 4 |
                 param_3 >> 2 & 0x3fU | param_1 & 0xf000] & 0xf0) << 4) << 4 |
         (byte)(&DAT_50061ad0)
               [(((param_1 & 0xf0) << 4 | param_1 & 0xc0) << 2 | param_2 & 0xf0) << 2 |
                param_2 >> 2 & 0x30 | uVar1] & 0xf0 |
         (uint)((byte)(&DAT_50061ad0)
                      [((((param_1 & 0xf) << 4 | param_1 & 0xc) << 2 | param_2 & 0xf) << 4 |
                       param_2 & 0xc) << 2 | uVar1] >> 4);
}


