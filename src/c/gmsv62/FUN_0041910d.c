/* FUN_0041910d - 0x0041910d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041910d(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar3;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar4 = -1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = 0x10;
  do {
    if (-1 < iVar4) break;
    uVar1 = FUN_0041903e(iVar3,0);
    iVar4 = FUN_0087a89b(uVar1,iVar3,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc)
                        );
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    FUN_004190dc(iVar2);
    iVar3 = iVar3 * 2;
  } while (iVar3 < 0x401);
  FUN_00419192(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


