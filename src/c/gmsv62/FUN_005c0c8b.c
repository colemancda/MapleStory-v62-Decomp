/* FUN_005c0c8b - 0x005c0c8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0c8b(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  cVar1 = FUN_0042452b();
  extraout_ECX[0x31] = (int)cVar1;
  cVar1 = FUN_0042452b();
  extraout_ECX[0x30] = (int)cVar1;
  while( true ) {
    cVar1 = FUN_0042452b();
    iVar6 = (int)cVar1;
    if (iVar6 < 0) break;
    iVar2 = (**(code **)(*extraout_ECX + 0x5c))();
    if ((iVar2 == 0) || (iVar6 != 0)) {
      FUN_005c1321(iVar6,uVar3);
    }
    else {
      *(int *)(unaff_EBP + -0x10) = *extraout_ECX;
      uVar3 = FUN_0042459a();
      (**(code **)(*(int *)(unaff_EBP + -0x10) + 0x60))(uVar3);
      uVar3 = *(undefined4 *)(unaff_EBP + 8);
    }
    uVar4 = FUN_0045cdbc(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    extraout_ECX[0x32] = extraout_ECX[0x32] + 1;
  }
  if ((DAT_00979178 == (int *)0x0) ||
     (iVar6 = (**(code **)(DAT_00979178[1] + 0x48))(&DAT_00979468), piVar5 = DAT_00979178,
     iVar6 == 0)) {
    piVar5 = (int *)0x0;
  }
  (**(code **)(*piVar5 + 0x48))(uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


