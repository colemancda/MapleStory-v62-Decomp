/* FUN_0063e0b9 - 0x0063e0b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063e0b9(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  
  FUN_00879bb8();
  FUN_0060142b(0x7c,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(1);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  FUN_00457cda(uVar1);
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(extraout_ECX + 0x84) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x98) = 0;
  piVar3 = (int *)(extraout_ECX + 200);
  iVar2 = 3;
  do {
    (**(code **)(*(int *)(*piVar3 + 4) + 0x1c))(0);
    piVar3 = piVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


