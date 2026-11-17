/* FUN_004f9702 - 0x004f9702 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f9702(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  iVar4 = *(int *)(unaff_EBP + 0x10) - iVar1;
  iVar3 = *(int *)(unaff_EBP + 0x10);
  do {
    if (iVar4 < 0x11) {
LAB_004f97ab:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      FUN_004f98cf(*(undefined4 *)(unaff_EBP + 8),iVar1,iVar3);
      goto LAB_004f97ab;
    }
    piVar2 = *(int **)(unaff_EBP + 8);
    iVar4 = *piVar2;
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + -1;
    uVar5 = FUN_004f994e(iVar4 + iVar1 * 0xc,iVar4 + ((iVar3 - iVar1) / 2 + iVar1) * 0xc,
                         iVar4 + -0xc + iVar3 * 0xc);
    FUN_004f985f(uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar6 = FUN_004f9986(piVar2,iVar1,iVar3,unaff_EBP + -0x18);
    FUN_004f9702(*(undefined4 *)(unaff_EBP + 8),iVar6,iVar3,*(undefined4 *)(unaff_EBP + 0x14));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004f38b7();
    iVar4 = iVar6 - iVar1;
    iVar3 = iVar6;
  } while( true );
}


