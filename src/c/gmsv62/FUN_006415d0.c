/* FUN_006415d0 - 0x006415d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_006415d0(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 4) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00903698);
  }
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 4) = 1;
  uVar2 = FUN_0042452b();
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  uVar3 = FUN_0042452b();
  switch(uVar3) {
  case 0:
    FUN_0064174a(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 1:
    uVar4 = 0;
    uVar5 = 0;
    goto LAB_0064165e;
  case 2:
    FUN_006419e8(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 3:
    FUN_00641d12(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 4:
    FUN_00641e75(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 5:
    FUN_006427f9(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 6:
    FUN_0064280b(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 7:
    FUN_00641fc9(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 8:
    FUN_00642162(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 9:
    FUN_006422fb(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 10:
    FUN_00642571(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
    break;
  case 0xc:
    uVar4 = 0;
    goto LAB_0064165a;
  case 0xd:
    uVar4 = 1;
LAB_0064165a:
    uVar5 = 1;
LAB_0064165e:
    FUN_00641896(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1,0,uVar5,uVar4);
    break;
  case 0xe:
    FUN_00641b90(uVar2,*(undefined4 *)(unaff_EBP + 8),uVar1);
  }
  *(undefined4 *)(extraout_ECX + 4) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


