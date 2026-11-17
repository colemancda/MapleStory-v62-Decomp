/* FUN_00506cec - 0x00506cec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00506cec(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  cVar1 = FUN_0042452b();
  FUN_0045cdbc(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar2 = FUN_0042452b();
  if (cVar1 == '\0') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x20,0xfa7);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    uVar3 = FUN_00679d22(unaff_EBP + 8,0xfa8);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (cVar2 == '\0') {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0xfaa);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x1c),
                 *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 6;
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xfa9);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x1c),
                 *(undefined4 *)(unaff_EBP + -0x14),cVar2);
    *(undefined1 *)(unaff_EBP + -4) = 6;
  }
  FUN_00414ebb();
  FUN_00471102(unaff_EBP + -0x18,7);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


