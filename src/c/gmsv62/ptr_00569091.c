/* ptr_00569091 - 0x00569091 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00569091(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar6;
  
  FUN_0057a546(0x10);
  iVar2 = DAT_00978368;
  if (unaff_ESI == unaff_EDI) {
LAB_005691a1:
    if (unaff_ESI == 0xc) goto LAB_005691a6;
LAB_00569221:
    uVar6 = FUN_0042459a();
    uVar4 = FUN_00424561();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    bVar3 = FUN_0042452b();
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    FUN_00473902(*(undefined2 *)(unaff_EBP + -0x18),0);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
    *(undefined4 *)(iVar2 + 0x2088) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar2 + 0x2054) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    *(uint *)(iVar2 + 0x2050) = bVar3 >> 1 & 1;
    FUN_0083050c(unaff_EBP + -0x28);
    puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4df);
    uVar6 = *puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4073(uVar6,100);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
  }
  else {
    if (unaff_ESI != 0xc) {
      if (unaff_ESI != 0x17) goto LAB_005692cb;
      goto LAB_005691a1;
    }
LAB_005691a6:
    iVar1 = *(int *)(unaff_EBP + -0x18);
    if (iVar1 == 1) {
      FUN_005697ac(unaff_EDI,unaff_EDI);
      uVar6 = 0x1c;
    }
    else if (iVar1 == 2) {
      FUN_005697ac(unaff_EDI,unaff_EDI);
      uVar6 = 0x1d;
    }
    else if (iVar1 == 3) {
      FUN_005697ac(unaff_EDI,unaff_EDI);
      uVar6 = 0x1e;
    }
    else {
      if ((iVar1 == 0xb) || (iVar1 == 0xd)) goto LAB_00569221;
      if (iVar1 == 0x13) {
        FUN_005697ac(unaff_EDI,unaff_EDI);
        uVar6 = 0x19;
      }
      else if (iVar1 == 0x19) {
        FUN_005697ac(unaff_EDI,unaff_EDI);
        uVar6 = 0x1f;
      }
      else {
        uVar6 = 0xf;
      }
    }
    FUN_0057a546(uVar6);
  }
LAB_005692cb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


