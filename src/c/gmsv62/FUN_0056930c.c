/* FUN_0056930c - 0x0056930c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056930c(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    iVar2 = FUN_0057a27a(0x24);
    if (iVar2 != 0) {
      (*DAT_0097b48c)(0x104,unaff_EBP + -0x16c);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(unaff_EBP + -0x16c,0xffffffff);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x14,0xdbb);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined1 *)(unaff_EBP + 0xb) = 0x5c;
      FUN_0045efbb(unaff_EBP + 0xb,1);
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + -4);
      }
      FUN_0045efbb(iVar2,uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(DAT_00973cd8 + 0x2c) = 0;
      _memset((void *)(unaff_EBP + -0x68),0,0x44);
      *(undefined4 *)(unaff_EBP + -0x68) = 0x44;
      uVar5 = *(undefined4 *)(unaff_EBP + -0x10);
      uVar4 = (*DAT_0097b4e0)(0,0,0,0x20,0,0,unaff_EBP + -0x68,unaff_EBP + -0x24);
      (*DAT_0097b3a4)(uVar5,uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    (*DAT_0097b514)(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


