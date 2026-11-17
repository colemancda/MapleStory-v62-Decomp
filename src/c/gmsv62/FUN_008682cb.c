/* FUN_008682cb - 0x008682cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008682cb(void)

{
  uint uVar1;
  uint *extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar2;
  char *pcVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((uVar1 & 0x20000000) == 0x20000000) {
    if (uVar1 == 0xe0010001) {
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      FUN_00414edd(s_You_do_not_have_access_to_this__P_0096ce64,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      goto LAB_0086836f;
    }
    if (uVar1 == 0xe0010002) {
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      pcVar3 = s_Your_nProtect_KeyCrypt_Driver_do_0096cee4;
    }
    else {
      if (uVar1 != 0xe0010003) goto LAB_0086834a;
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      pcVar3 = s_You_are_currently_running_under_W_0096cf64;
    }
    FUN_00414edd(pcVar3,0xffffffff);
  }
  else {
LAB_0086834a:
    FUN_00434e21(unaff_EBP + -0x10,s_Failed_to_Initialize_nProtect_Ke_0096ce38,uVar1);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
LAB_0086836f:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


