/* FUN_0059d537 - 0x0059d537 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059d537(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *extraout_ECX = 1;
  extraout_ECX[1] = 1;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + 0xb) = uVar2;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(extraout_ECX + 0xeb) = uVar2;
  FUN_0044590d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0044590d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004b876a(uVar1);
  FUN_0043f124(unaff_EBP + -0x1d8);
  FUN_0045cdbc(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045cdbc(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045cdbc(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045cdbc(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045cdbc(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045cdbc(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045cdbc(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar3 = FUN_0042459a();
  extraout_ECX[0xe7] = uVar3;
  FUN_00414f8b(unaff_EBP + -0x20);
  FUN_00414f8b(unaff_EBP + -0x18);
  FUN_00414f8b(unaff_EBP + -0x10);
  FUN_00414f8b(unaff_EBP + -0x28);
  FUN_00414f8b(unaff_EBP + -0x1c);
  FUN_00414f8b(unaff_EBP + -0x24);
  FUN_00414f8b(unaff_EBP + -0x14);
  if ((*(byte *)(unaff_EBP + 0xb) & 2) == 0) {
    extraout_ECX[3] = 1;
  }
  else {
    extraout_ECX[3] = 0;
    FUN_004b876a(uVar1);
    FUN_0043f124(unaff_EBP + -0x388);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


