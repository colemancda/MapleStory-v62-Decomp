/* FUN_006e48b9 - 0x006e48b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e48b9(void)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iStack_1c;
  int local_18;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = &local_18;
  iStack_1c = -1;
  local_18 = 0;
  FUN_004184ca(&DAT_0097812c);
  iStack_1c = *(int *)(unaff_EBP + 8);
  FUN_0078a024();
  local_18 = 0x6e48f1;
  FUN_006e4f8b();
  local_18 = 0x6e48f8;
  FUN_006e5525();
  local_18 = 0x6e48ff;
  FUN_006e614e();
  local_18 = 0x6e4906;
  FUN_006e61df();
  local_18 = 0x6e490d;
  FUN_006e62e5();
  local_18 = 0x6e4914;
  FUN_006ea8a7();
  local_18 = 0x6e491f;
  local_18 = FUN_007b3de5();
  iStack_1c = unaff_EBP + -0x14;
  FUN_005df3f8();
  local_18 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (local_18 == 0) {
    local_18 = 9;
    iStack_1c = 0x6e495a;
    FUN_006e2dea();
    local_18 = 0;
    iStack_1c = 0x6e4962;
    FUN_006e9599();
  }
  else {
    *(int **)(unaff_EBP + 8) = &iStack_1c;
    FUN_005e05a2();
    FUN_006ea600();
  }
  local_18 = -1;
  iStack_1c = 0x6e4974;
  puVar1 = (undefined4 *)FUN_006b42c2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = extraout_ECX;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_18 = 0;
    iStack_1c = 0x6e4988;
    FUN_005e064d();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


