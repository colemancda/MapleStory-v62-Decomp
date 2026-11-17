/* FUN_00485f4e - 0x00485f4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00485f4e(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00448190(extraout_ECX + 0x8c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1a7) = 0;
  puVar2 = (undefined4 *)(unaff_EBP + -0x19f);
  puVar1 = (undefined4 *)(extraout_ECX + 0x248);
  iVar3 = 0x30;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    *puVar2 = 0;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0043f184(unaff_EBP + -0x1bc);
  FUN_007c520a();
  *(undefined4 *)(extraout_ECX + 0x3c8) = 0;
  *(undefined4 *)(extraout_ECX + 0x3c4) = 0;
  FUN_007c52d9(0);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x414) + 0x4dc) = 0;
  iVar3 = (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x20))();
  if (iVar3 == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x1c))(1);
  }
  FUN_00486841(0,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


