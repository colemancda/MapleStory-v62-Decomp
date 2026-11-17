/* FUN_006bf29f - 0x006bf29f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bf29f(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_00879bb8();
  uStack_8 = *(undefined4 *)(unaff_EBP + 8);
  uStack_c = 0x6bf2b4;
  FUN_0081622a();
  if (*(int *)(extraout_ECX + 0x8c) != 0) {
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0x76;
    uStack_24 = 0x4a;
    uStack_28 = 0x6bf2d5;
    FUN_0053793e();
    uStack_28 = 0x6bf2df;
    uStack_28 = thunk_FUN_0045e2eb();
    *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
    FUN_00448dc6(auStack_2c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0048b97b();
    FUN_005558b0();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


