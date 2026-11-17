/* FUN_0077eae9 - 0x0077eae9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077eae9(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar2;
  undefined4 uStack_10;
  int *piStack_c;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) != 0) && (extraout_ECX[0x203] == 0)) {
    piStack_c = (int *)0xb8;
    uStack_10 = 0x77eb15;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      piStack_c = (int *)0x77eb2a;
      iVar1 = (**(code **)(extraout_ECX[1] + 0x30))();
      piStack_c = (int *)(iVar1 + 0x56);
      uStack_10 = 0x77eb35;
      uStack_10 = (**(code **)(extraout_ECX[1] + 0x2c))();
      FUN_00778774(extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    extraout_ECX[0x205] = 1;
  }
  piStack_c = extraout_ECX + 0x204;
  puVar2 = &uStack_10;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
  FUN_007823c9(&uStack_10);
  FUN_004489f5(puVar2);
  (**(code **)(*extraout_ECX + 0x40))();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


