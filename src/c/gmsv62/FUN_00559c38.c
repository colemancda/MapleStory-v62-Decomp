/* FUN_00559c38 - 0x00559c38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00559c38(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  char *pcVar6;
  char *_Str1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar4 == 0) {
    iVar4 = *(int *)(extraout_ECX + 8);
  }
  else {
    if (*(uint *)(extraout_ECX + 0xc) <= *(uint *)(extraout_ECX + 0x14)) goto LAB_00559c75;
    iVar4 = *(int *)(extraout_ECX + 8) * 2 + 1;
  }
  if (iVar4 != 0) {
    FUN_0055c588(iVar4,0);
  }
LAB_00559c75:
  pcVar6 = (char *)**(undefined4 **)(unaff_EBP + 8);
  uVar3 = 0;
  if (pcVar6 != (char *)0x0) {
    for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
      uVar3 = uVar3 * 0x20 + 1 + (int)*pcVar6;
    }
  }
  uVar3 = uVar3 % *(uint *)(extraout_ECX + 8);
  puVar5 = *(undefined4 **)(*(int *)(extraout_ECX + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)(extraout_ECX + 4) + uVar3 * 4);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
      puVar5 = (undefined4 *)FUN_0055cdb8();
      *(undefined4 **)(unaff_EBP + -0x18) = puVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar2 = **(undefined4 **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        FUN_00414edd(uVar2,0xffffffff);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        uVar2 = *puVar1;
        *puVar5 = &PTR_LAB_008eba60;
        puVar5[1] = uVar2;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        puVar5[2] = 0;
        FUN_00414f8b(unaff_EBP + -0x10);
        puVar5[3] = 0;
        *puVar5 = &PTR_FUN_008eba5c;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
        FUN_00414ebb();
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0xc));
      }
      *puVar1 = puVar5;
LAB_00559d72:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar5;
    }
    pcVar6 = (char *)**(int **)(unaff_EBP + 8);
    if ((char *)**(int **)(unaff_EBP + 8) == (char *)0x0) {
      pcVar6 = DAT_00980dfc;
    }
    _Str1 = (char *)puVar5[2];
    if ((char *)puVar5[2] == (char *)0x0) {
      _Str1 = DAT_00980dfc;
    }
    iVar4 = _strcmp(_Str1,pcVar6);
    if (iVar4 == 0) {
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0xc));
      }
      goto LAB_00559d72;
    }
    puVar5 = (undefined4 *)puVar5[1];
  } while( true );
}


