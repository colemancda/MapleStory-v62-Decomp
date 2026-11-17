/* FUN_006151c2 - 0x006151c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006151c2(void)

{
  undefined4 uVar1;
  char *pcVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 8))();
  if (iVar4 == 0) goto LAB_006152f6;
  iVar5 = FUN_0061411c();
  iVar4 = *(int *)(extraout_ECX + 0x98);
  sVar3 = FUN_0045f084(iVar5 + 0x3b,*(undefined4 *)(iVar5 + 0x3f));
  *(int *)(extraout_ECX + 0x98) = (int)sVar3;
  uVar6 = FUN_0045f03e(iVar5 + 0x43,*(undefined4 *)(iVar5 + 0x45));
  *(uint *)(extraout_ECX + 0x9c) = uVar6 & 0xff;
  sVar3 = FUN_0045f084(iVar5 + 0x49,*(undefined4 *)(iVar5 + 0x4d));
  *(int *)(extraout_ECX + 0xa0) = (int)sVar3;
  FUN_00613f35();
  FUN_0061636f();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(extraout_ECX + 0x98);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 < iVar5) {
    puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x18b);
    iVar5 = *(int *)(extraout_ECX + 0x98);
    uVar1 = *puVar7;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + -0x10,uVar1,iVar5 - iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_006152c7:
    FUN_00414ebb();
    pcVar2 = *(char **)(unaff_EBP + -0x10);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
  }
  else if (iVar5 < iVar4) {
    puVar7 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x18c);
    iVar5 = *(int *)(extraout_ECX + 0x98);
    uVar1 = *puVar7;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar1,iVar5 - iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_006152c7;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_006152f6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


