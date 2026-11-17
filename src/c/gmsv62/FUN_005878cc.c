/* FUN_005878cc - 0x005878cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005878cc(void)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EBP;
  int iVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = FUN_004029b9(0x114);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00587422();
  }
  iVar7 = -1;
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar4 != 0) & uVar4 - 8;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005889dc();
  bVar2 = true;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + 8) + 4) != 0) {
      iVar7 = 3;
      goto LAB_00587a5a;
    }
    FUN_0057bb37(*(undefined4 *)(unaff_EBP + -0x18));
  }
  FUN_00587ede(1,*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0xbb0);
    uVar1 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004de636(0x16a,0xdb,uVar1,10,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0xbaf);
    uVar1 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004de636(0x16a,0xdb,uVar1,10,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00402676();
  iVar3 = FUN_00587e50();
  if (iVar3 == 1) {
    puVar5 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0xc);
    uVar1 = *puVar5;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    iVar7 = FUN_0087b6ab(uVar1);
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00414ebb();
  }
  piVar6 = (int *)FUN_0045b90e(unaff_EBP + 0xc);
  if (*piVar6 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar6 + -4);
  }
  if ((iVar3 == 4) || (iVar7 < 0)) {
    bVar2 = false;
  }
  FUN_00414ebb();
  if (bVar2) {
    iVar7 = -3;
  }
  if ((*(int *)(unaff_EBP + 8) != 0) &&
     (*(int *)(*(int *)(unaff_EBP + 8) + 4) == *(int *)(unaff_EBP + -0x18))) {
    FUN_0045e621();
  }
LAB_00587a5a:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005889f9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar7;
}


