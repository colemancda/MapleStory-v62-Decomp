/* PcSerializeObject - 0x50c086ff in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int PcSerializeObject(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *this;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  bool bVar6;
  
                    /* 0x86ff  7  PcSerializeObject */
  FUN_50c10270();
  bVar6 = DAT_50c1ca84 == 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb8;
  if (bVar6) {
    iVar4 = -0x7fffbffb;
  }
  else {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    if ((puVar2 == (undefined4 *)0x0) || (*(int *)(unaff_EBP + 0xc) == 0)) {
      iVar4 = -0x7fffbffd;
    }
    else {
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_50c08cee();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piVar5 = (int *)(-(uint)(unaff_EBP != 0x48) & unaff_EBP - 0x44U);
      FUN_50c06653();
      if ((*(byte *)(piVar5 + 2) & 8) == 0) {
        *(undefined1 *)(unaff_EBP + 0xf) = 0;
        *puVar2 = 0;
        FUN_50c08a10(piVar5,unaff_EBP + 0xf,1);
        cVar1 = *(char *)(unaff_EBP + 0xf);
        if (cVar1 != 'A') {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (cVar1 == '#') {
            piVar5 = (int *)FUN_50c0896f(unaff_EBP + -0x1c,piVar5);
            FUN_50c04b87((void *)(unaff_EBP + -0x14),piVar5);
          }
          else {
            if ((cVar1 != '\x1b') && (cVar1 != 's')) {
              FUN_50c02a72((undefined4 *)(unaff_EBP + -0x14));
              *(undefined1 *)(unaff_EBP + -4) = 0;
              FUN_50c09968();
              iVar4 = -0x7ff8fa90;
              goto LAB_50c08960;
            }
            piVar5 = (int *)FUN_50c06dac();
            FUN_50c04b87((void *)(unaff_EBP + -0x14),piVar5);
          }
          FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          iVar4 = PcCreateObject();
          if (iVar4 < 0) {
            piVar5 = *(int **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 8))(piVar5);
            }
            if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
              FUN_50c02a85(*(int **)(unaff_EBP + -0x14));
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_50c09968();
            goto LAB_50c08960;
          }
          uVar3 = *(undefined4 *)(unaff_EBP + -0x2c);
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_50c101c4(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + -0x18);
          iVar4 = (**(code **)(*piVar5 + 0x10))(piVar5,uVar3);
          if (iVar4 < 0) {
            FUN_50c101d2(iVar4,piVar5,&DAT_50c17380);
          }
          uVar3 = *(undefined4 *)(unaff_EBP + -0x18);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          **(undefined4 **)(unaff_EBP + 8) = uVar3;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            FUN_50c02a85(*(int **)(unaff_EBP + -0x14));
          }
        }
      }
      else {
        this = (int *)*puVar2;
        if (this == (int *)0x0) {
          *(undefined1 *)(unaff_EBP + 0xf) = 0x41;
          FUN_50c08a3c(piVar5,unaff_EBP + 0xf,1);
        }
        else {
          FUN_50c08cb4(this,unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_50c064e3();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_50c02a72((undefined4 *)(unaff_EBP + 0xc));
          iVar4 = (**(code **)(*this + 0x10))(this,*(undefined4 *)(unaff_EBP + -0x2c));
          if (iVar4 < 0) {
            FUN_50c101d2(iVar4,this,&DAT_50c17380);
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_50c09968();
      iVar4 = 0;
    }
  }
LAB_50c08960:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


