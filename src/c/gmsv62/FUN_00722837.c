/* FUN_00722837 - 0x00722837 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00722837(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  
  FUN_00879bb8();
  iVar5 = *(int *)(*(int *)(extraout_ECX + 0x580) + 0x48);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar5 != 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = DAT_00978368;
    iVar5 = FUN_00455c59(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_0045e7c2(0);
    }
    if (*(int *)(*(int *)(extraout_ECX + 0x580) + 0x3c) == 0) {
      iVar5 = FUN_00653ddc(*(undefined4 *)(unaff_EBP + -0x14));
    }
    else {
      iVar5 = FUN_00455c59(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      iVar5 = *(int *)(iVar5 + 4);
      uVar3 = *(undefined4 *)(iVar5 + 0x8d);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      sVar1 = FUN_0045f084(iVar5 + 0x89,uVar3);
      iVar5 = (int)sVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x14) = iVar5;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    iVar2 = FUN_00722abd(0);
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x588) + 0x38);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int *)(unaff_EBP + -0x18) = iVar2;
    iVar4 = iVar5 << 3;
    do {
      if (((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 8), iVar2 == 0)) ||
         (*(uint *)(iVar2 + -4) <= (uint)(*(int *)(unaff_EBP + -0x10) + iVar5))) {
        uVar3 = 0;
        uVar6 = 0;
      }
      else {
        if (*(int *)(unaff_EBP + -0x14) < 1) {
LAB_0072294b:
          uVar3 = 0;
        }
        else {
          iVar2 = FUN_008345ae(*(undefined4 *)(iVar2 + 4 + iVar4));
          uVar3 = 1;
          if (iVar2 != 1) goto LAB_0072294b;
        }
        uVar6 = 1;
      }
      FUN_0072297b(*(undefined4 *)(unaff_EBP + -0x10),uVar6,uVar3);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar4 = iVar4 + 8;
      if (3 < *(int *)(unaff_EBP + -0x10)) goto LAB_0072296c;
      iVar2 = *(int *)(unaff_EBP + -0x18);
    } while( true );
  }
  iVar5 = 0;
  do {
    FUN_0072297b(iVar5,0,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
LAB_0072296c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


