/* ptr_510010f0 - 0x510010f0 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int ptr_510010f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EBP;
  int *piVar6;
  
  FUN_51005950();
  iVar5 = -0x7ff8fff2;
  puVar4 = FUN_51001acd();
  *(uint **)(unaff_EBP + -0x10) = puVar4;
  iVar1 = *(int *)(unaff_EBP + 8);
  piVar6 = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar4 != (uint *)0x0) {
    piVar6 = (int *)FUN_51001184(puVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    piVar6[4] = iVar1;
    iVar5 = (**(code **)*piVar6)(piVar6,uVar3,uVar2);
    if (iVar5 != 0) {
      (**(code **)(*piVar6 + 0x14))(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


