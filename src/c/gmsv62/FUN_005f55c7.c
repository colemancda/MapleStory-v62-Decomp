/* FUN_005f55c7 - 0x005f55c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f55c7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  uint uVar5;
  
  FUN_00879bb8();
  iVar4 = ((uint)*(ushort *)(unaff_EBP + 8) * 100 + (uint)*(ushort *)(unaff_EBP + 10)) * 100 +
          (uint)*(ushort *)(unaff_EBP + 0xe);
  *(int *)(unaff_EBP + 0x14) = extraout_ECX + 0x7c;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  uVar5 = *(uint *)(extraout_ECX + 0x78);
  do {
    if (uVar5 == 0) {
LAB_005f5670:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar1 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 8);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    FUN_00414f8b(uVar5);
    iVar2 = *(int *)(uVar5 + 4);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    iVar3 = *(int *)(uVar5 + 8);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar2 <= iVar4) && (iVar4 <= iVar3)) {
      FUN_00414f8b(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_005f5670;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  } while( true );
}


