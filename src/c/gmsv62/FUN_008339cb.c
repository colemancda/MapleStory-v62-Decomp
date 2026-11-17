/* FUN_008339cb - 0x008339cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008339cb(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar1 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + -0xd) = uVar1;
  uVar2 = FUN_0042459a();
  FUN_0042459a();
  iVar3 = FUN_00833af2(uVar2);
  if (iVar3 == 0) {
LAB_00833a1a:
    *(undefined4 *)(unaff_EBP + 8) = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    iVar4 = unaff_EBP + 8;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    iVar4 = iVar3 + 0x30;
    if ((*(char **)(iVar3 + 0x30) == (char *)0x0) || (**(char **)(iVar3 + 0x30) == '\0'))
    goto LAB_00833a1a;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00414f8b(iVar4);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
    FUN_00414ebb();
  }
  if (*(char *)(unaff_EBP + -0xd) == '\0') {
    uVar2 = FUN_00679d22(unaff_EBP + -0x20,0x10b9);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00471102(uVar2,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0xd) != '\x01') goto LAB_00833ad6;
    if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) && (**(char **)(unaff_EBP + -0x14) != '\0'))
    {
      FUN_00471102(unaff_EBP + -0x14,0xc);
      goto LAB_00833ad6;
    }
    uVar2 = FUN_00679d22(unaff_EBP + -0x1c,0x10ba);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00471102(uVar2,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  FUN_00414ebb();
LAB_00833ad6:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


