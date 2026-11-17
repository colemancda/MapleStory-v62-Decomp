/* FUN_00605abe - 0x00605abe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00605abe(int param_1,int param_2,int param_3)

{
  int iVar1;
  int aiStack_24 [5];
  
  if ((((*(int *)(param_1 + 4) != 0) && (0x78 < param_2)) && (param_2 < 0x9c)) &&
     ((0xfb < param_3 && (param_3 < 0x11f)))) {
    aiStack_24[4] = 0;
    aiStack_24[3] = 0;
    aiStack_24[2] = 0;
    aiStack_24[1] = 0;
    aiStack_24[0] = param_1;
    FUN_00679d22(aiStack_24,0xeee);
    iVar1 = FUN_007db791();
    if (iVar1 != 6) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      aiStack_24[4] = 0;
      aiStack_24[3] = 0x605b25;
      FUN_00449913();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    aiStack_24[4] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    aiStack_24[3] = 0x605b37;
    FUN_008161f1();
  }
  if (((0x88 < param_2) && (param_2 < 0x11a)) && ((0xe7 < param_3 && (param_3 < 0xf8)))) {
    aiStack_24[4] = 0x605b60;
    FUN_00605f1c();
  }
  return 0;
}


