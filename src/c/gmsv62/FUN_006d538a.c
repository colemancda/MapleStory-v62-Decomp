/* FUN_006d538a - 0x006d538a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d538a(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_18;
  int local_14;
  
  FUN_00879bb8();
  local_14 = unaff_EBP + -0x14;
  iStack_18 = 0x6d53a4;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_14 = 0x6d53b0;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (cVar1 == '\0') {
    local_14 = 0x2f9;
    iStack_18 = unaff_EBP + 8;
    piVar2 = (int *)FUN_00679d22();
    local_14 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_18 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    local_14 = 0x2f8;
    iStack_18 = unaff_EBP + 8;
    piVar2 = (int *)FUN_00679d22();
    local_14 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_18 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  local_14 = 0x6d5426;
  FUN_00414ebb();
  local_14 = 0xffffffff;
  *(int **)(unaff_EBP + -0x18) = &iStack_18;
  uVar4 = 0xffffffff;
  uVar3 = FUN_00449713(0xffffffff);
  FUN_004dbb20(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006d5f10();
  FUN_006d2ea2();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_14 = 0x6d545c;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_14 = 0x6d5468;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


