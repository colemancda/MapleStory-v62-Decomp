/* FUN_00540972 - 0x00540972 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00540972(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0x201) goto LAB_005409fe;
  iVar3 = FUN_00540e08(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x8c) + 0x68);
  if (0 < iVar1) {
    if (iVar1 < 5) {
      if (4 < iVar3) goto LAB_005409fe;
    }
    else if (iVar1 == 5) goto LAB_005409fe;
  }
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4d3);
    uVar2 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_0052abbb(iVar3,*(undefined4 *)(extraout_ECX + 200),*(undefined4 *)(extraout_ECX + 0xcc));
  }
LAB_005409fe:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


