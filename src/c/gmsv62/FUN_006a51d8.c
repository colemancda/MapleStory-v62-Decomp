/* FUN_006a51d8 - 0x006a51d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a51d8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    iVar1 = FUN_004029b9(0xac);
    *(int *)(unaff_EBP + 8) = iVar1;
    iVar2 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_006a4144(extraout_ECX[0x1d]);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar3 != 0) & uVar3 - 8;
    FUN_006a7d13();
    iVar1 = extraout_ECX[0x28];
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_006a47ea(iVar1);
    (**(code **)(*extraout_ECX + 0x34))(2);
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_006a7d30();
  }
  else if (*(int *)(unaff_EBP + 8) == 2) {
    (**(code **)(*extraout_ECX + 0x34))(2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


