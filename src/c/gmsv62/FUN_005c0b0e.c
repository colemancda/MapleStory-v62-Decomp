/* FUN_005c0b0e - 0x005c0b0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0b0e(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') goto LAB_005c0c7d;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 == '\x01') {
    uVar3 = FUN_00679d22(unaff_EBP + -0x20,0x17e);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_005c0c5f:
    FUN_00414ebb();
  }
  else {
    if (cVar1 == '\x02') {
      FUN_0045cdbc(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x1a1);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + 8,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_005c0c5f;
    }
    if (cVar1 == '\x03') {
      FUN_0045cdbc(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x1a2);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + 8,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_005c0c5f;
    }
    if (cVar1 == '\x04') {
      FUN_0045cdbc(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x1a3);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00434e21(unaff_EBP + 8,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_005c0c5f;
    }
  }
  FUN_00471102(unaff_EBP + 8,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_005c0c7d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


