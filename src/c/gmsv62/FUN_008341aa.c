/* FUN_008341aa - 0x008341aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008341aa(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  iVar1 = DAT_0097926c;
  uVar3 = 0;
  if (0 < *(int *)(unaff_EBP + 8)) {
    iVar2 = FUN_0062d486(*(undefined4 *)(unaff_EBP + 8));
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0x144) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0062fa3b(unaff_EBP + 8,unaff_EBP + -0x10);
      if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -4) != 0)) {
        FUN_008343cb(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 0xc));
        uVar3 = 1;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_005ee767();
      goto LAB_00834225;
    }
  }
  uVar3 = 0;
LAB_00834225:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


