/* FUN_007dedd3 - 0x007dedd3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007dedd3(void)

{
  int iVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004bc4fa();
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2b] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  extraout_ECX[0x2c] = 0xffffffff;
  extraout_ECX[0x2d] = 5;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  *extraout_ECX = &PTR_FUN_008f1cc0;
  extraout_ECX[1] = &PTR_FUN_008f1c74;
  extraout_ECX[2] = &PTR_FUN_008f1c70;
  iVar2 = DAT_00978368;
  iVar1 = *(int *)(DAT_00978368 + 0x2b40);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if ((iVar1 != 0) && (*(int *)(iVar2 + 0x2bf2) == *(int *)(iVar2 + 0x2088))) {
    extraout_ECX[0x2e] = 1;
    extraout_ECX[0x2d] = 6;
  }
  if ((*(int *)(iVar2 + 0x2cac) != 0) &&
     ((**(int **)(iVar2 + 0x2cb8) == *(int *)(iVar2 + 0x2088) ||
      (iVar1 = FUN_004ea83d(*(int *)(iVar2 + 0x2088)), iVar1 == 2)))) {
    extraout_ECX[0x2d] = extraout_ECX[0x2d] + 1;
    extraout_ECX[0x2f] = 1;
  }
  iVar1 = *(int *)(unaff_EBP + 0x10);
  iVar2 = (extraout_ECX[0x2d] + 2) * 0xf;
  if (600 < iVar1 + iVar2) {
    iVar1 = (extraout_ECX[0x2d] + 2) * -0xf + 600;
  }
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (800 < iVar3 + 100) {
    iVar3 = 700;
  }
  _OOBECompleteWnfWaitCallback_28(iVar3,iVar1,100,iVar2,10,1,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


