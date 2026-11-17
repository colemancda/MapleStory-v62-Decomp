/* FUN_006d529a - 0x006d529a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d529a(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = unaff_EBP + -0x14;
  iStack_1c = 0x6d52b7;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_18 = 0x6d52c3;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (cVar1 == '\0') {
    iStack_18 = 0x6d530c;
    FUN_00495ba8();
    iStack_18 = 0x2f7;
    iStack_1c = unaff_EBP + 8;
    piVar2 = (int *)FUN_00679d22();
    iStack_18 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_1c = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    iStack_18 = 0x2f6;
    iStack_1c = unaff_EBP + 8;
    piVar2 = (int *)FUN_00679d22();
    iStack_18 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_1c = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  iStack_18 = 0x6d5341;
  FUN_00414ebb();
  iStack_18 = 0xffffffff;
  *(int **)(unaff_EBP + -0x18) = &iStack_1c;
  uVar4 = 0xffffffff;
  uVar3 = FUN_00449713(0xffffffff);
  FUN_004dbb20(uVar3,uVar4);
  FUN_006d2ea2();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_18 = 0x6d536e;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_18 = 0x6d537a;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


