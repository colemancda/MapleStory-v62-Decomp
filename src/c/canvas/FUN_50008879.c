/* FUN_50008879 - 0x50008879 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __fastcall FUN_50008879(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (byte)(&DAT_50071ad0)
                [(int)(param_3 & 0xfc | 0x1f00) >> 2 | param_1 >> 4 & 0x800 | param_1 & 0xf000] &
          0xf;
  return ((byte)(&DAT_50061ad0)
                [(param_2 >> 5 & 0x400 | param_2 & 0xf800) >> 6 | (param_1 & 0xf00) << 4 |
                 param_1 & 0xc00 | uVar1] & 0xf0 |
         ((byte)(&DAT_50071ad0)
                [(int)(param_3 & 0xfc | 0x1f00) >> 2 | param_1 >> 4 & 0x800 | param_1 & 0xf000] &
         0xf0) << 4) << 4 |
         (uint)((byte)(&DAT_50061ad0)
                      [(((param_1 & 0xf) << 4 | param_1 & 0xc) << 3 | param_2 & 0x1f) << 5 |
                       param_2 & 0x10 | uVar1] >> 4) |
         (byte)(&DAT_50061ad0)
               [((param_1 & 0xf0) << 4 | param_1 & 0xc0) << 4 | param_2 >> 1 & 0x3f0 | uVar1] & 0xf0
  ;
}


