/* FUN_0056a319 - 0x0056a319 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056a319(void)

{
  int iVar1;
  UCHAR UVar2;
  size_t sVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _memset((void *)(unaff_EBP + -0x50),0,0x40);
  *(int *)(unaff_EBP + -0x4c) = unaff_EBP + -0x150;
  *(undefined1 *)(unaff_EBP + -0x50) = 0x37;
  *(undefined2 *)(unaff_EBP + -0x48) = 0x100;
  Netbios((PNCB)(unaff_EBP + -0x50));
  iVar5 = 0;
  if (*(char *)(unaff_EBP + -0x150) != '\0') {
    do {
      _memset((void *)(unaff_EBP + -0x50),0,0x40);
      *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0x14f + iVar5);
      *(undefined1 *)(unaff_EBP + -0x50) = 0x32;
      Netbios((PNCB)(unaff_EBP + -0x50));
      _memset((void *)(unaff_EBP + -0x50),0,0x40);
      *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0x14f + iVar5);
      *(undefined1 *)(unaff_EBP + -0x50) = 0x33;
      FUN_0087b200(unaff_EBP + -0x46,&DAT_0096575c);
      *(int *)(unaff_EBP + -0x4c) = unaff_EBP + -0x3a8;
      *(undefined2 *)(unaff_EBP + -0x48) = 600;
      UVar2 = Netbios((PNCB)(unaff_EBP + -0x50));
      if (UVar2 == '\0') {
        FUN_00434e21(unaff_EBP + -0x10,s__02X__02X__02X__02X__02X__02X_0096573c,
                     *(undefined1 *)(unaff_EBP + -0x3a8),*(undefined1 *)(unaff_EBP + -0x3a7),
                     *(undefined1 *)(unaff_EBP + -0x3a6),*(undefined1 *)(unaff_EBP + -0x3a5),
                     *(undefined1 *)(unaff_EBP + -0x3a4),*(undefined1 *)(unaff_EBP + -0x3a3));
        if (((char *)**(undefined4 **)(unaff_EBP + 8) != (char *)0x0) &&
           (*(char *)**(undefined4 **)(unaff_EBP + 8) != '\0')) {
          sVar3 = _strlen(&DAT_00965738);
          FUN_0045efbb(&DAT_00965738,sVar3);
        }
        iVar1 = *(int *)(unaff_EBP + -0x10);
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + -4);
        }
        FUN_0045efbb(iVar1,uVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(unaff_EBP + -0x150));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


