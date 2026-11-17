/* FUN_00587560 - 0x00587560 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00587560(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_004029b9(0x114);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00587422();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_005889dc();
  bVar1 = true;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    if (*(int *)(*(int *)(unaff_EBP + 8) + 4) != 0) {
      iVar2 = 3;
      goto LAB_005876f0;
    }
    FUN_0057bb37(*(undefined4 *)(unaff_EBP + -0x14));
  }
  FUN_00587ede(3,*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + 0xc) == 4) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0xbb0);
    uVar5 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004de636(0x16a,0xdb,uVar5,10,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0xbaf);
    uVar5 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004de636(0x16a,0xdb,uVar5,10,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00402676();
  iVar2 = FUN_00587e50();
  if ((iVar2 != 1) && (iVar2 != 2)) {
    iVar2 = 0;
  }
  puVar4 = (undefined4 *)FUN_0045b90e(unaff_EBP + 0xc);
  uVar5 = FUN_0087b6ab(*puVar4);
  **(undefined4 **)(unaff_EBP + 0x10) = uVar5;
  FUN_00414ebb();
  piVar6 = (int *)FUN_0045b90e(unaff_EBP + 0xc);
  if (*piVar6 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*piVar6 + -4);
  }
  if ((iVar7 == 4) || (iVar2 < 1)) {
    bVar1 = false;
  }
  FUN_00414ebb();
  if (bVar1) {
    iVar2 = -3;
  }
  if ((*(int *)(unaff_EBP + 8) != 0) &&
     (*(int *)(*(int *)(unaff_EBP + 8) + 4) == *(int *)(unaff_EBP + -0x14))) {
    FUN_0045e621();
  }
LAB_005876f0:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005889f9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


