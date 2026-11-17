/* FUN_004ebbd4 - 0x004ebbd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ebbd4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  BYTE *pBVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int iStack_40;
  
  FUN_00879bb8();
  uVar2 = FUN_0042452b();
  iVar1 = DAT_00978134;
  uVar2 = uVar2 & 0xff;
  iVar3 = *(int *)(DAT_00978134 + 0x24);
  *(uint *)(unaff_EBP + -0x1c) = uVar2;
  if ((((iVar3 == 0) && (uVar2 == 0)) || ((*(int *)(iVar1 + 0x3c) == 0 && (uVar2 == 2)))) ||
     ((*(int *)(iVar1 + 0x44) == 0 && (uVar2 == 3)))) goto LAB_004ebdc9;
  iStack_40 = 0x4ebc2e;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((uVar2 == 0) || ((uVar2 == 2 || (uVar2 == 3)))) {
    iStack_40 = unaff_EBP + -0x18;
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffc4;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_40 = 0x4ebc58;
    FUN_004f14ee();
    iStack_40 = 0x4ebc5f;
    iVar3 = FUN_0047c5bf();
    if (iVar3 == 0) goto LAB_004ebc67;
  }
  else {
LAB_004ebc67:
    iStack_40 = 0x4ebc73;
    FUN_0045cdbc();
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar4 = FUN_00415015(0x400,1);
    FUN_00471777(uVar4);
    iStack_40 = 0x4ebc9d;
    FUN_004150c0();
    iStack_40 = 0x400;
    pBVar5 = (BYTE *)FUN_00415015();
    while (*pBVar5 != '\0') {
      iStack_40 = 0x4ebcb9;
      BVar6 = IsDBCSLeadByte(*pBVar5);
      if (BVar6 == 0) {
        if (((char)*pBVar5 < ' ') || ('~' < (char)*pBVar5)) {
          *pBVar5 = ' ';
        }
        pBVar5 = pBVar5 + 1;
      }
      else {
        pBVar5[1] = ' ';
        *pBVar5 = ' ';
        pBVar5 = pBVar5 + 2;
      }
    }
    iStack_40 = 0x4ebce2;
    FUN_004150c0();
    iStack_40 = 0;
    FUN_0045ed72();
    iStack_40 = 0x4ebcf3;
    FUN_0045ee27();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_40 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puVar7 = (undefined4 *)FUN_00679d22();
    uVar4 = *puVar7;
    iStack_40 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + -0x14,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined2 *)(unaff_EBP + -0x24) = 0;
    iStack_40 = 0;
    uVar4 = FUN_004f136e();
    *(int **)(unaff_EBP + -0x20) = &iStack_40;
    FUN_00450368(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004e21db();
    FUN_0085c794();
    iStack_40 = *(int *)(unaff_EBP + -0x38);
    iVar3 = FUN_0047c41d();
    if ((iVar3 == 0) &&
       ((((iVar3 = *(int *)(unaff_EBP + -0x1c), iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 2)) ||
        (iVar3 == 3)))) {
      iStack_40 = unaff_EBP + -0x14;
      FUN_00471102();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_004ebdc9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


