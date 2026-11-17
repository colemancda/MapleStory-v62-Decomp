/* FUN_0073016d - 0x0073016d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073016d(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x5b4) == 0) {
    iVar1 = FUN_004029b9(0x560);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
      iVar1 = iVar1 + 0x60;
      uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
      uVar2 = FUN_0072fd15(uVar2,iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00732fe5(uVar2);
    FUN_0073023a();
    *(undefined4 *)(extraout_ECX + 0x570) = 1;
  }
  else {
    FUN_0073023a();
    *(undefined4 *)(extraout_ECX + 0x570) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


