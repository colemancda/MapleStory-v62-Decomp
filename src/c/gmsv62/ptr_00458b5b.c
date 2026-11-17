/* ptr_00458b5b - 0x00458b5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00458b5b(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar6;
  
  while( true ) {
    uVar2 = FUN_0045e2eb();
    iVar3 = FUN_00459dd4(uVar2);
    if (iVar3 == 0) {
      sVar4 = _strlen((char *)(unaff_EBX + 0x28));
      FUN_0045efbb((char *)(unaff_EBX + 0x28),sVar4);
      sVar4 = _strlen(&DAT_00964364);
      FUN_0045efbb(&DAT_00964364,sVar4);
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    puVar6 = unaff_ESI + 2;
    if ((2 < *(int *)(unaff_EBP + 8)) || (iVar3 = FUN_00458d57(5,*puVar6,unaff_ESI[3]), iVar3 == 0))
    break;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iVar3 = FUN_00458c4f(unaff_EBP + -0x28,5,iVar3);
    unaff_EBX = *(int *)(iVar3 + 4);
    unaff_ESI = puVar6;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    pcVar1 = (char *)**(undefined4 **)(unaff_EBP + 0xc);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      uVar2 = 1;
      goto LAB_00458c3e;
    }
    if (*(int *)(unaff_EBP + -0x18) < 2) {
      piVar5 = (int *)FUN_00679d22(unaff_EBP + 0xc,0x203);
      iVar3 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar3 + -4);
      }
      FUN_0045efbb(iVar3,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00458c32;
    }
    FUN_00434e21(*(undefined4 **)(unaff_EBP + 0xc),s_One_or_more_of_your_pets_cannot_e_00964318);
  }
  else {
    uVar2 = FUN_00679d22(unaff_EBP + 8,0x204);
    *(undefined4 *)(unaff_EBP + -4) = 10;
    FUN_00414f8b(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00458c32:
    FUN_00414ebb();
  }
  uVar2 = 0;
LAB_00458c3e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


