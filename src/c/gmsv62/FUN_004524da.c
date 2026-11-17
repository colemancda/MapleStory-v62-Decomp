/* FUN_004524da - 0x004524da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004524da(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  SAFEARRAY *pSVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffac;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar1 != 0) {
    *(undefined2 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_004525e2(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
    *(undefined2 *)(unaff_EBP + -0x24) = 0x2000;
    pSVar4 = SafeArrayCreate(0x11,0,(SAFEARRAYBOUND *)0x0);
    *(SAFEARRAY **)(unaff_EBP + -0x1c) = pSVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined2 *)(unaff_EBP + -0x54) = 0;
    FUN_0045262a(0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined2 *)(unaff_EBP + -0x44) = 0;
    FUN_0045262a(0);
    *(undefined2 *)(unaff_EBP + -0x34) = 3;
    *(undefined4 *)(unaff_EBP + -0x2c) = 2;
    piVar2 = *(int **)(extraout_ECX + 0x1c);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    (**(code **)(iVar1 + 0x2c))
              (piVar2,iVar3,unaff_EBP + -0x34,unaff_EBP + -0x44,unaff_EBP + -0x24,unaff_EBP + -0x54)
    ;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402bc3(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402bc3(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402bc3(unaff_EBP + -0x54);
    SafeArrayDestroy(*(SAFEARRAY **)(unaff_EBP + -0x1c));
    if (iVar3 != 0) {
      (*DAT_0097b650)(iVar3 + -4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402bc3(unaff_EBP + -0x24);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


