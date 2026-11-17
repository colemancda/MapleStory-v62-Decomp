/* FUN_0052db8e - 0x0052db8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0052db8e(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_004029b9(0x110);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0052ddcd();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  FUN_0052e131();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_004b57d7(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc));
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0052e11f();
  FUN_0046575e();
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar4 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0046575e();
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x24) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0xfc) = uVar3;
  uVar3 = FUN_0045cdbc(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414f8b(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  uVar3 = FUN_0045cdbc(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414f8b(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  FUN_004245d2(*(int *)(unaff_EBP + -0x1c) + 0x2c,8);
  puVar5 = (undefined4 *)FUN_0045cdbc(unaff_EBP + 0xc);
  lstrcpyA((LPSTR)(*(int *)(unaff_EBP + -0x1c) + 0x34),(LPCSTR)*puVar5);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  puVar5 = (undefined4 *)FUN_0045cdbc(unaff_EBP + 0xc);
  lstrcpyA((LPSTR)(*(int *)(unaff_EBP + -0x1c) + 0x66),(LPCSTR)*puVar5);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  puVar5 = (undefined4 *)FUN_0045cdbc(unaff_EBP + 0xc);
  lstrcpyA((LPSTR)(*(int *)(unaff_EBP + -0x1c) + 0x98),(LPCSTR)*puVar5);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar1 = FUN_0042459a();
  *(undefined2 *)(iVar2 + 0xc) = uVar1;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar1 = FUN_0042459a();
  *(undefined2 *)(iVar2 + 0xe) = uVar1;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x104) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x108) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar3 = FUN_0042459a();
  *(undefined4 *)(iVar2 + 0x10c) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  uVar1 = FUN_00424561();
  *(undefined2 *)(iVar2 + 0x1c) = uVar1;
  FUN_0052e0fe(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0052e143();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


