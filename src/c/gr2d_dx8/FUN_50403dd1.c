/* FUN_50403dd1 - 0x50403dd1 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50403dd1(int param_1)

{
  uint uVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = (*DAT_50438c78)(*(undefined4 *)(param_1 + 0x98),0xfffffff0);
  if ((uVar1 & 0x40000000) == 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      uVar1 = uVar1 & 0xff37ffff | 0x80000000;
    }
    else {
      uVar1 = uVar1 & 0x7f37ffff | 0xc80000;
    }
    (*DAT_50438c58)(*(undefined4 *)(param_1 + 0x98),0xfffffff0,uVar1);
    (*DAT_50438ccc)(*(undefined4 *)(param_1 + 0x98),-1 - (uint)(*(int *)(param_1 + 0x4c) != 0),0,0,0
                    ,0,0x2b);
  }
  (*DAT_50438c74)(*(undefined4 *)(param_1 + 0x98),&local_14);
  (*DAT_50438c44)(*(undefined4 *)(param_1 + 0x98),&local_24);
  (*DAT_50438ccc)(*(undefined4 *)(param_1 + 0x98),0,0,0,
                  ((*(int *)(param_1 + 0x20) - local_c) - local_24) + local_14 + local_1c,
                  ((*(int *)(param_1 + 0x24) - local_8) - local_20) + local_10 + local_18,0x62);
  return;
}


