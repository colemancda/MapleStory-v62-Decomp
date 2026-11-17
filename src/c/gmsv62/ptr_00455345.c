/* ptr_00455345 - 0x00455345 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00455345(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_ESI + 0x510) == unaff_EDI) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_ESI + 0x510);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0xb4))(piVar1);
  if (iVar3 < (int)unaff_EDI) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  if (*(int **)(unaff_ESI + 0x510) == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_ESI + 0x510);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0xe0))(piVar1,0xffffffff);
  if (iVar3 < (int)unaff_EDI) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  FUN_0081420c(unaff_EDI,unaff_EDI,0x100,0x13c,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(unaff_EDI,0x13f,0x100,0x68,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(unaff_EDI,0x1aa,0xf6,0xa3,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(0x112,0x11,0x1fc,0x4e,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(0x113,0x5f,0x19c,0x1ae,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(0x2b2,0x9d,0x5a,0x166,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(0xff,0x220,0x221,0x38,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_0081420c(0x2b3,0x62,0x59,0x16,unaff_EDI,unaff_EBX,unaff_ESI,unaff_EBX);
  FUN_005266d6(unaff_EBX);
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x4e5);
  uVar2 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045af91(uVar2,unaff_EBX,unaff_EDI,unaff_EDI,unaff_EDI);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  *(undefined4 *)(unaff_ESI + 0x4e0) = **(undefined4 **)(unaff_EBP + 8);
  FUN_0065c6a5();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != unaff_EDI) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


