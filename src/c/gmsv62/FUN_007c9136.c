/* FUN_007c9136 - 0x007c9136 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_007c9136(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_24;
  int aiStack_20 [3];
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x1ebc) == 0) {
    aiStack_20[2] = 1;
    aiStack_20[0] = extraout_ECX + 0xd2c;
    *(int **)(unaff_EBP + -0x14) = aiStack_20 + 1;
    iStack_24 = 0x7c9176;
    FUN_00433bdf();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_24 = extraout_ECX + 0xd3c;
    *(int **)(unaff_EBP + -0x18) = aiStack_20;
    FUN_0041160e();
    iStack_24 = 0xa6e;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679d22(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_24 = 0x7c91ae;
    uVar1 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_24;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0046f440();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    aiStack_20[2] = 0x7c91d2;
    FUN_00414ebb();
    *(undefined4 *)(extraout_ECX + 0x1ebc) = 1;
  }
  else {
    aiStack_20[2] = 0;
    aiStack_20[1] = 0x7c9159;
    FUN_0051548c();
    *(undefined4 *)(extraout_ECX + 0x1ebc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


