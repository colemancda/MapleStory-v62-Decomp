/* FUN_007cc7cb - 0x007cc7cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cc7cb(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = FUN_0043f6fe();
  if (-1 < iVar3) {
    *(undefined4 *)(extraout_ECX + 0x530) = 0xffffffff;
    FUN_00441501(1);
    (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
  }
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  bVar2 = FUN_0042452b();
  uVar5 = (uint)bVar2;
  iVar3 = FUN_0064d61f(*(undefined4 *)(unaff_EBP + -0x10));
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
  }
  if (bVar2 < 2) {
    uVar5 = 1;
  }
  iVar3 = FUN_00650e14();
  *(uint *)(unaff_EBP + -0x14) = uVar5;
  if (iVar3 <= (int)uVar5) {
    *(int *)(unaff_EBP + -0x14) = iVar3;
  }
  uVar5 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x18) = uVar5 & 0x7f;
  uVar6 = FUN_0042452b();
  pcVar1 = *(code **)(unaff_EBP + -0x10);
  *(uint *)(unaff_EBP + 8) = uVar6 & 0xff;
  if ((int)pcVar1 < 0x236a6a) {
    if ((((pcVar1 != (code *)0x236a69) &&
         ((pcVar1 != (code *)0x111ae9 && (pcVar1 != (code *)0x12a189)))) &&
        (pcVar1 != (code *)0x142829)) &&
       ((pcVar1 != (code *)0x205d29 && (pcVar1 != (code *)0x21e3c9)))) goto LAB_007cc906;
  }
  else if ((((pcVar1 != (code *)0x2f9f6c) && (pcVar1 != (code *)0x312609)) &&
           (pcVar1 != (code *)0x4dd5cc)) &&
          ((pcVar1 != ptr_004f5c6a && (pcVar1 != (code *)0x4faa8c)))) goto LAB_007cc906;
  *(undefined4 *)(extraout_ECX + 0x27d8) = 1;
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x27dc) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x27cc) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x27d0) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x27d4) = *(undefined4 *)(unaff_EBP + 8);
LAB_007cc906:
  if (*(int *)(unaff_EBP + -0x18) != 0x7f) {
    *(uint *)(extraout_ECX + 0x52c) =
         (*(uint *)(extraout_ECX + 0x52c) ^ (uVar5 & 0xff) >> 7) & 1 ^
         *(uint *)(extraout_ECX + 0x52c);
    uVar4 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x530) = *(undefined4 *)(unaff_EBP + -0x18);
    (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))
              (uVar4,100,*(undefined4 *)(extraout_ECX + 0x27d8));
    *(undefined4 *)(extraout_ECX + 0x528) = 5000;
  }
  FUN_0079305e(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 8),0,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


